                time = customers[i][0];
                q.push(customers[i]);
                i++;
            }
        }
        return waitTime / (customers.size() * 1.0);
    }
};
[
